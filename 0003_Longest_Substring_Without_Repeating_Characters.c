int lengthOfLongestSubstring(char* s)
{
    int maxLen = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        int hash[256] = {0};

        for (int j = i; s[j] != '\0'; j++)
        {
            unsigned char ch = s[j];

            if (hash[ch] == 1)
            {
                break;
            }

            int len = j - i + 1;

            if (len > maxLen)
            {
                maxLen = len;
            }

            hash[ch] = 1;
        }
    }

    return maxLen;
}
