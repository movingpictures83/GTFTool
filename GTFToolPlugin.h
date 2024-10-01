#ifndef GTFTOOLPLUGIN_H
#define GTFTOOLPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class GTFToolPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "GTFTool";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
