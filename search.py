import re
from requests import get 
username = "asilbek_boboqulov"
fullname = "Asilbek Boboqulov"
x = get('https://robocontest.uz/tasks?sort=number&direction=desc').text
task_count = re.search('<td><a href="https://robocontest.uz/tasks/',x)
task_count = int(str(task_count.span()).replace(')','').split(',')[1])
task_count = int(x[task_count:task_count+4])
for i in range(1, task_count):
    a = '{:04}'.format(i)
    n = get(f"https://robocontest.uz/tasks/{a}/rating?by=code").text
    h =f'<td>\s+<a href="https://robocontest.uz/profile/{username}">\s+{fullname}\s+</a>\s+</td>'
    if re.findall(h, n):
        print(f"Topshiriq: {a}     O'rin:", end=" ")
        for j in range(1,21):
            if re.findall(f"<td>\s+{j}\s+</td>\s+{h}", n):
                print(j)
                break
