class Solution {
    public boolean checkString(String s) 
    {
        int l = 0, f = 0;

        if(s.contains("a"))
        {
            if(s.startsWith("b"))
                return false;

            f = s.indexOf('a');
            l = s.lastIndexOf('a');

            for(int i = f; i <= l; i++)
            {
                if(s.charAt(i) == 'b')
                    return false;
            }
            
            return true;
        }
        return true;
    }
}