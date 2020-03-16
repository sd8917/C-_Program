
class Vector {
      int cs;
      int ms;
      int *arr;

public:
    Vector(){
        cs = 0;
        ms = 1;
        arr = new int[ms];
    }
    void pushback(const int d){
        if(cs==ms){
            //Array if full
            int *oldArray = arr;
            arr = new int[2*ms];
            ms = 2*ms;

            for(int i=0;i<cs;i++){
                arr[i] = oldArray[i];
            }
            ///clear the old memory
            delete [] oldArray;
        }
        arr[cs] = d;
        cs++;
    }

    void popback(){
        cs--;
    }
    int frontelm()const{
        return arr[0];
    }
    int backelm()const{
        return arr[cs-1];
    }

    bool empty() const{
        return cs==0;
    }

    int capacity() const{
        return ms;
    }

    int at(const int i){
        return arr[i];
    }
    int size(){
            return cs;
    }

    //operator overloading
    int operator[](const int i){
        return arr[i];
    }

};
