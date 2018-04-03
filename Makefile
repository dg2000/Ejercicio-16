hola: data.txt grafica.py
	python grafica.py

data.txt: album.cpp
	c++ album.cpp -o album
	./album > data.txt
