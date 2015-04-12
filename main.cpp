#include<nana/gui.hpp>

int main()
{
     using namespace nana;
     
     form fm;
     
     drawing{fm}.draw([](paint::graphics& graph){
         graph.string({10, 10}, L"Hello, world!",colors::red);
     });
     
     fm.events().click(API::exit);
     fm.show();
     
     exec();
}