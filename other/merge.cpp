/*
 * Complete the function below.
 */
string mergeStrings(string a, string b) {
    
    string merg = "";
    long long int i=0;
    long long int j=0;
    while(i!=a.length()&&j!=b.length())
        {
            merg = merg+a[i];
            i++;
            merg = merg+b[j];
            j++;
        }
    
         while(i!=a.length())
            {
                merg = merg+a[i];
                i++;
            }
         while(j!=b.length())
            {
                merg = merg+b[j];
                j++;
            }
          

return merg;
}