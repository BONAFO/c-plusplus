#include "case.h"



using namespace std;



string background_color(string color)
{
    if (color == "black")
    {
        return "40";
    }
    else if (color == "red")
    {
        return "41";
    }
    else if (color == "green")
    {
        return "42";
    }
    else if (color == "yellow")
    {
        return "43";
    }
    else if (color == "blue")
    {
        return "44";
    }
    else if (color == "magenta")
    {
        return "45";
    }
    else if (color == "cyan")
    {
        return "46";
    }
    else if (color == "white")
    {
        return "47";
    }
    return "0";
}

string txt_color(string color)
{
    if (color == "black")
    {
        return "30";
    }
    else if (color == "red")
    {
        return "31";
    }
    else if (color == "green")
    {
        return "32";
    }
    else if (color == "yellow")
    {
        return "33";
    }
    else if (color == "blue")
    {
        return "34";
    }
    else if (color == "magenta")
    {
        return "35";
    }
    else if (color == "cyan")
    {
        return "36";
    }
    else if (color == "white")
    {
        return "37";
    }
    return "0";
}


string msj_color(string txt, string txt_c, string txt_back)
{
    txt_c = to_lower_case(txt_c);
    txt_back = to_lower_case(txt_back);
    txt_c = txt_color(txt_c);
    txt_back = background_color(txt_back);
    string final_txt = "\033[" + txt_back + ";" + txt_c + "m" + txt + "\033[m";
    return final_txt;
}

