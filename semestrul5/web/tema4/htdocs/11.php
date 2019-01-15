<?php
	$studenti = array(array("Ion", "George", "Florin"),
						 array(1995, 1992, 1999));
	for($i=0; $i<count($studenti); $i++) {
		for($j=0;$j<count($studenti[$i]);$j++)
			echo $studenti[$i][$j] . " ";
		echo "\n";
	}
?>