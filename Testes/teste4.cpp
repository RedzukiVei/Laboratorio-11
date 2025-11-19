int main()
{
    int x;
    int y;
    bool a;
    bool b;
    
    x = 10;
    y = 0;
    
    a = x;          
    b = y;       
    b = 42;        
    
    if (x) { a = true; }
    if (y) { a = false; }
    
    a = x && 5;
    a = y || 10;
    b = !x;
    b = !y;
}