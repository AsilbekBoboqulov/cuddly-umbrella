<?php
    Class Transportlar{
        public $a = "Bu public";
        protected $b = "Bu protected";
        private $c = "Bu private";
        function test(){

        }
    }
    Class Avtobus extends Transportlar{
        public function test(){
            echo $this->a;
            echo '<br>'.$this->b;
            echo '<br>'.$this->c;
        }
    }
    Class Mashina extends Transportlar{

    }
    $bus = new Avtobus();
    $car = new Mashina();
    echo $car->test();
?>
