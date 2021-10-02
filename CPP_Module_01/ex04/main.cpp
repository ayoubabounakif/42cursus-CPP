/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabounak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:12:24 by aabounak          #+#    #+#             */
/*   Updated: 2021/09/20 15:12:28 by aabounak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>
# include <string>

/*
    Algorithm:
        - Initialize a result string to store the resultant string after replacing
    all the occurences of the substring s1 to s2 in the source
        - Iterate over the characters of source using a variable and perform the following:
            * If the prefix substring of the source string is equal to s1 from the index
        then add the string s2 in the resultant string.
            * Otherwise, add the current character to the resultant string.
        - After completing the above steps, override source by the resultant string.
*/

void    replaceAllOccurences(
    std::string & source,
    std::string const& s1,
    std::string const& s2)
{
    /* Stores the resultant string */
    std::string result = "";

    /* Traverse source */
    for (size_t i = 0; i < source.length(); i++)
    {
        size_t k = 0;
        /* If the first char of string "s1" matches with the currect char in "source" */
        if (source[i] == s1[k] && i + s1.length() <= source.length())
        {
            size_t j;
            /* Check if the complete string matches or not */
            for (j = i; j < i + s1.length(); j++)
            {
                if (source[j] != s1[k])
                    break ;
                else
                    k++;
            }
            /* If the complete source string matches with s1 then replace it with s2 */
            if (j == i + s1.length())
            {
                result.append(s2);
                i = j - 1;
            }
            /* Otherwise */
            else
                result.push_back(source[i]);
        }
        /* Otherwise */
        else
            result.push_back(source[i]);
    }
    source = result;
}

int main( void )
{
    std::ifstream   inputFile;
    std::ofstream   outputFile;
    std::string     filename, s1, s2, buf;
    
    std::cout << "Enter filename: ";
    getline(std::cin, filename);
    std::cout << "Enter string #1: ";
    getline(std::cin, s1);
    std::cout << "Enter string #2: ";
    getline(std::cin, s2);

    if (!s1.empty() && !s2.empty())
    {
        inputFile.open(filename);
        outputFile.open(filename + ".replace");
        while (getline(inputFile, buf))
        {
            replaceAllOccurences(buf, s1, s2);
            outputFile << buf << std::endl;
        }
        inputFile.close();
        outputFile.close();
    }
    else
    {
        std::cout
            << "One or both of the strings were empty" <<
        std::endl;
        return (EXIT_FAILURE);
    }
    return (EXIT_SUCCESS);
}
