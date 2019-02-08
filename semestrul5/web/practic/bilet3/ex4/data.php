<?php
	$data = [
		'11111' => 'str. Unirii',
		'12345' => 'Calea Motilor',
		'56789' => 'Drumul de haur mancatiash'
	];  // valori de test
	if( !isset($data[$_GET['zip']]) ){
		   $data[$_GET['zip']]=''; // daca cheia (codul postal) nu exista, o adaugam cu empty string ca valoare
            // astfel, returnam un string gol cand nu avem valoarea salvata
		}
	echo $data[$_GET['zip']]; // returnam valoarea din array (stim sigur ca daca nu exista a fost adaugata la linia 8
?>