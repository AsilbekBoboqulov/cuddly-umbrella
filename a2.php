<?php 

class Transport{
    public $model;
    public $narx = '5000';
    public $rang = 'oq';
    public $tezlik = '50';
    public $Ysarfi = '7';
    const masofa = 300;

    public function __construct($a,$b,$c){
        // echo 'konstruktor ishladi';
        $this->model = $a;
        $this->narx = $b;
        $this->tezlik = $c;

    }
    public function __destruct(){                                                                                                                                                                                   
        // echo 'destruktor ishladi<br>';
      

    }
    // public function test(){
    //     echo'const='.self::masofa;
    //     echo'const='.Mashina::masofa;
    // }
}



class Bus extends Transport {

}
    
    class Car extends Transport {

    }

    class Bike extends Transport {

    }

    $bus1 = new Bus('Isuzi',25000,90);
    $car1 = new Car('Tesla',55000,250);
    $car2 = new Car('BMW',45000,220);
    $bike1 = new Bike('BMX',500,30);

    
   

             

    echo'<pre>';
    print_r($bus1);
    print_r($car1);
    print_r($car2);
    print_r($bike1);
    echo'<pre>';






?>
