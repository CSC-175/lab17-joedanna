// Definition of findHigh function goes here
template <typename a, typename b, typename c,typename d>
void findHigh(a Data[],b size,c &index,d &High) {


        for(int i=0;i<size;i++) {
                if(Data[i]>High) {
                        High=Data[i];
                        index=i;
                }
        }
}
