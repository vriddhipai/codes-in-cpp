void isPalindrome (std::string s){  
    if(equal(s.begin(), s.begin() + s.size()/2, s.rbegin()) )
        std::cout << "string is a palindrome. " << std::endl;
    else
        std::cout << "string is not a palindrome. " << std::endl;
}

std::string remove_rubbish(std::string s)
{
    auto is_rubbish = [](char c) 
                { 
                    return std::ispunct(c) || std::isspace(c); 
                };

    s.erase(std::remove_if(s.begin(), 
                           s.end(), 
                           is_rubbish), 
            s.end());

    return s;    
}
