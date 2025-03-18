//find which bits are set ('1') in a number
//eg: num = 5 binary = 101 bits set = 0th and 2nd


for(int k=0;k<32;k++) {
    if(num & (1 << k)) {  // Check if the k-th bit is set
        cout<<i<<endl;
    }
}
