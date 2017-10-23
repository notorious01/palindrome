#include <codecvt>
#include <iostream>
#include "stack.hpp"

int main()
{
   stack<int> st;
	 char c;
	 while(std::cin>>c)
	    {
		    int i;
		    switch (c)
		   {
		    case '+':
		    {
			  std::cin >> i;
		    st.push(i);
		    break;
		    }
        case '-':
			      st.pop();
			      break;
		    case '=':
			      st.print();
			      break;
		    case '?':
			        st.printlast();
              break;
		  }
	}
	system("pause");
	return 0;
}
