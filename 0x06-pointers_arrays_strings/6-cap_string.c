/**
 * cap_string - Program that capitalizes a string
 * @s: given string
 * Return: String cap
 */
char *cap_string(char *s)
{
    int i = 0;
    
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            if (i == 0)
                s[i] = s[i] - 32;
            else if (s[i-1] == 32 || s[i-1] == '{' || s[i-1] == '}' || s[i-1] == '"' || s[i-1] == ';' || s[i-1] == ',' || s[i-1] == '!' || s[i-1] == '?' || s[i-1] == '(' || s[i-1] == ')' || s[i - 1] == '\t' || s[i-1] == '.')
                s[i] = s[i] - 32;
        }
    }
    return (s);
}
