#include <iostream>
#include "Python.h"

int main()
{
	//Initialize the python instance
	Py_Initialize();
	
	//Run a simple string
	PyRun_SimpleString("from time import time,ctime\n"
						"print('Today is',ctime(time()))\n");

	//Run a simple file
	FILE* PScriptFile = fopen("test.py", "r");
	if(PScriptFile){
		PyRun_SimpleFile(PScriptFile, "test.py");
		fclose(PScriptFile);
	}

	//Run a python function
	PyObject *pName, *pModule, *pFunc, *pArgs, *pValue;

	pName = PyUnicode_FromString((char*)"script");
	pModule = PyImport_Import(pName);
	pFunc = PyObject_GetAttrString(pModule, (char*)"test");
	pArgs = PyTuple_Pack(1, PyUnicode_FromString((char*)"Greg"));
	pValue = PyObject_CallObject(pFunc, pArgs);
	
	pArgs2 = PyTuple_Pack(1, PyUnicode_FromString((char*)"Umair"));
	pValue2 = PyObject_CallObject(pFunc, pArgs2);
	
	
	auto result = _PyUnicode_AsString(pValue);
	auto result2 = _PyUnicode_AsString(pValue2);
	std::cout << result <<" "<< result2 << std::endl;

	//Close the python instance
	Py_Finalize();
}
