#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include "GTFToolPlugin.h"

void GTFToolPlugin::input(std::string file) {
 inputfile = file;
readParameterFile(file);
}

void GTFToolPlugin::run() {}

void GTFToolPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "gtftool";
myCommand += " ";
myCommand += " -g " + PluginManager::addPrefix(myParameters["fastafile"]);
myCommand += " -t " + PluginManager::addPrefix(myParameters["gtffile"]);
myCommand += " genes ";
myCommand += " >& "+outputfile;
 system(myCommand.c_str());
}

PluginProxy<GTFToolPlugin> GTFToolPluginProxy = PluginProxy<GTFToolPlugin>("GTFTool", PluginManager::getInstance());
