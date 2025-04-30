int countingValleys(int steps, string path) {
    int seaLevel=0;
    int numValley=0;
    for(int i =0; i<steps ; i++){
        if(path[i] == 'U'){
            seaLevel++;
        }
        else if(path[i]== 'D'){
            seaLevel--;
        }
        if(seaLevel==0 && path[i]=='U'){
            numValley++;
        }
    }
    return numValley;
}
