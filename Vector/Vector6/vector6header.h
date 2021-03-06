
template<typename T>
class Vector {
      int cs;
      int ms;
      T *arr;

public:
    Vector(){
        cs = 0;
        ms = 1;
        arr = new T[ms];
    }
    void pushback(const T d){
        if(cs==ms){
            //Array if full
            T *oldArray = arr;
            arr = new T[2*ms];
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
    T frontelm()const{
        return arr[0];
    }
    T backelm()const{
        return arr[cs-1];
    }

    bool empty() const{
        return cs==0;
    }

    int capacity() const{
        return ms;
    }

    T at(const int i){
        return arr[i];
    }
    int size(){
            return cs;
    }

    //operator overloading
    T operator[](const int i){
        return arr[i];
    }

};
