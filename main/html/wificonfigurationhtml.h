#ifndef  _WIFICONFIGURATOR
#define  _WIFICONFIGURATOR
#include <string>

static const char  wifiConfigurationHTML[] =
"<!DOCTYPE html>\n"
"<html>\n"
"<head>\n"
"<meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">\n"
"<title> Wifi Configuration Page </title>\n"
"<style>\n"
"Body {\n"
"font-family: Calibri, Helvetica, sans-serif;\n"
"background-color: lime-green;\n"
"}\n"
"button {\n"
"background-color: #4CAF50;\n"
"width: 100%;\n"
"color: white;\n"
"padding: 15px;\n"
"margin: 10px;\n"
"border: none;\n"
"cursor: pointer;\n"
"border-radius: 5px;\n"
"}\n"
"form {\n"
"border: 3px solid #f1f1f1;\n"
"}\n"
"input[type=text],\n"
"input[type=password] {\n"
"width: 100%;\n"
"margin: 8px 0;\n"
"padding: 12px 20px;\n"
"display: inline-block;\n"
"border: 2px solid green;\n"
"box-sizing: border-box;\n"
"border-radius: 5px;\n"
"}\n"
"button:hover {\n"
"opacity: 0.7;\n"
"}\n"
".cancelbtn {\n"
"background-color: #e42e2e;\n"
"}\n"
".scan {\n"
"padding: 10px;\n"
"}\n"
".buttons {\n"
"display: flex;\n"
"flex-wrap: nowrap;\n"
"justify-content: space-between;\n"
"}\n"
".container {\n"
"padding: 25px;\n"
"background-color: lightblue;\n"
"}\n"
"ul {\n"
"list-style-type: none;\n"
"margin: 0;\n"
"padding: 0;\n"
"}\n"
"li {\n"
"background-color: #f9f9f9;\n"
"padding: 8px;\n"
"margin-bottom: 7px;\n"
"border-radius: 5px;\n"
"}\n"
"</style>\n"
"</head>\n"
"<body>\n"
"<center>\n"
"<h1> WIFI Soft AP Configuration </h1>\n"
"</center>\n"
"<form mehtod=\"get\">\n"
"<div class=\"container\">\n"
"<label>WIFI SSID : </label>\n"
"<input type=\"text\" placeholder=\"Enter SSID\" name=\"username\" required>\n"
"<label>Password : </label>\n"
"<input type=\"password\" placeholder=\"Enter Password\" name=\"password\" required>\n"
"<label>Email : </label>\n"
"<input type=\"email\" placeholder=\"email\" name=\"email\" required>\n"
"<div class=\"buttons\">\n"
"<button type=\"submit\">Connect</button>\n"
"<button type=\"submit\">Scan</button>\n"
"<button type=\"button\" class=\"cancelbtn\"> Cancel</button>\n"
"</div>\n"
"<ul class=\"scan\">\n"
"</ul>\n"
"</div>\n"
"</form>\n"
"</body>\n"
"</html>";

static std::string wifiConfigurationHTMLString;
static void addScansToHtml(std::vector<std::string> ssids)
{
    size_t position = wifiConfigurationHTMLString.find("</ul>");
    for (auto& ssid : ssids)
    {
        wifiConfigurationHTMLString.insert(position, "<li>" + ssid + "</li>\n");
    }
}
#endif