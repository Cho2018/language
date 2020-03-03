#include <iostream>
#include "MalformedData.h"
using namespace std;

MalformedData::MalformedData(string msg):MyException(string msg) {}