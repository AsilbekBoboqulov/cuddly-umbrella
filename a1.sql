-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1:3306
-- Generation Time: Dec 09, 2022 at 09:29 AM
-- Server version: 8.0.30
-- PHP Version: 7.2.34

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `as_baza`
--

-- --------------------------------------------------------

--
-- Table structure for table `jobs`
--

CREATE TABLE `jobs` (
  `id` int NOT NULL,
  `name` varchar(50) NOT NULL,
  `cost` int NOT NULL,
  `what` varchar(50) NOT NULL,
  `map` varchar(250) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `time` varchar(50) NOT NULL,
  `img` varchar(100) NOT NULL,
  `title` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `text` text NOT NULL,
  `eye` int NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

--
-- Dumping data for table `jobs`
--

INSERT INTO `jobs` (`id`, `name`, `cost`, `what`, `map`, `time`, `img`, `title`, `text`, `eye`) VALUES
(1, 'Oʼzbekiston Fanlar akademiyasi Bioorganik kimyo...', 60000, 'darakchi.uz', 'Oʼzbekiston Respublikasi Fanlar akademiyasining katta majlislar zali. Toshkent shahar, Ya.Gʼulomov koʼchasi, 70-uy.', '2022-11-13', 'assets/images/habar-1.jpg', '“Polimerlar fanining zamonaviy muammolari” mavzusida Oʼzbek-Qozoq Simpoziumi oʼtkaziladi', 'Joriy yil 23-24-sentyabr kunlari Oʼzbekiston Respublikasi Fanlar akademiyasi Polimerlar kimyosi va fizikasi instituti tomonidan “Polimerlar fanining zamonaviy muammolari” mavzusida Oʼzbek-Qozoq Simpoziumi oʼtkaziladi.\n\nSimpozium 23-sentyabr kuni soat 10:00da boshlanadi.', 269),
(2, 'Fanlar akademiyasi press-tur...', 30000, 'tnews.uz', 'Toshkent viloyati, Qibray tumani, Yuqori-yuz MFY.', '2022-11-12', 'assets/images/habar-2.jpg', '“Fаn, tа’lim vа аmаliyot integrаtsiyasi: muаmmolаr vа innovаtsion yechimlаr” nomli respublikа ilmiy-аmаliy konferensiyasigа tаklif qilаmiz!', 'Joriy yil 14-16-sentyabr kunlari Oʼzbekiston Fanlar akademiyasi Immunologiya va inson genomikasi instituti tomonidan OʼzR FА va RTА akademigi Oʼ.А.Аripov xotirasi va Markaziy Osiyoda ilk bor buyrak koʼchirib oʼtkazilganligining 50 yilligiga bagʼishlangan “Xirurgiya, trаnsplаntologiya vа immunologiyaning dolzаrb muаmmolаri” xalqaro ilmiy-amaliy anjuman oʼtkaziladi.\n\nАnjuman oʼz ishini 14-sentyabr kuni soat 09:00 da boshlaydi.', 229),
(3, 'Metallurgiya sohasida foydali modelga patent oldi', 75000, 'xs.uz', 'Toshkent shahar, Shayxontohur tumani, Аbdulla Qodiriy, 7 b.', '2022-11-04', 'assets/images/habar-3.jpg', '“Xirurgiya, trаnsplаntologiya vа immunologiyaning dolzаrb muаmmolаri” xalqaro ilmiy-amaliy anjumaniga taklif qilamiz!', 'Joriy yil 12-sentyabr kuni Fanlar akademiyasi Genetika va oʼsimliklar eksperimental biologiyasi instituti tomonidan “Fan, taʼlim va amaliyot integratsiyasi: muammolar va innovatsion yechimlar” nomli respublika ilmiy-amaliy konferensiya oʼtkaziladi.\n\nKonferentsiya boshlanish vaqti - 09:00.', 375);

--
-- Indexes for dumped tables
--

--
-- Indexes for table `jobs`
--
ALTER TABLE `jobs`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `jobs`
--
ALTER TABLE `jobs`
  MODIFY `id` int NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
