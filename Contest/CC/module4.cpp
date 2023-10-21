#include <iostream> 
using namespace std; 

int main() 
{
    unsigned char buf[sizeof(int)* 2]; 

    // Buffer on stack
    // placement new in buffer buf

    int *pInt = new (buf) int (3); 
    int *qInt = new (buf+sizeof(int)) int (5);
    int *pBuf = (int *)(buf + 0); 
    int *qBuf = (int *)(buf + sizeof(int)); 
    
    cout << "Buf Addr Int Addr" << endl;
    cout<<pBuf<<" "<<pInt<<endl<<qBuf<<" "<<qInt<<endl; 

    cout << "1st Int 2nd Int" << endl;
    cout << *pBuf << " " << *qBuf << endl;
    
    int *rInt = new int(7); 
    // heap allocation cout << "Heap Addr 3rd Int" << endl;
    cout << rInt << " " << *rInt << " " << endl;
    delete rInt;

    // No delete
    
    return 0; 
}