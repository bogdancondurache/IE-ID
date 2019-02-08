CREATE DATABASE test; -- ne asiguram sa avem si baza de date creata, iar abia apoi tabela

CREATE TABLE test.locatari (
	cod_loc int(4) PRIMARY KEY AUTO_INCREMENT, -- nu e nevoie de NOT NULL pentru ca este PRIMARY KEY
	nume_pren varchar(30),
	nr_per int(2)
)