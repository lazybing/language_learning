All:
	g++ -g usett0.cpp tabtenn0.cpp -o tabten0
	g++ -g usett1.cpp tabtenn1.cpp -o tabten1
	g++ -g usebrass1.cpp brass.cpp -o brass1
	g++ -g usebrass2.cpp brass.cpp -o brass2
clean:
	rm tabten0 tabten1 brass1 brass2
PYTHON:All clean


