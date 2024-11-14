#include "pch.h"
#include "CppUnitTest.h"
#include "../lab8.1.rec/FileName.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UTLabTest
{
    TEST_CLASS(UTLabTest)
    {
    public:
       
        TEST_METHOD(TestCountOccurrences)
        {
            const char* testStr = "a+b=c-";  
            int result = CountOccurrences(testStr);  
            Assert::AreEqual(result, 3);  
        }

        
        TEST_METHOD(TestReplaceSymbols)
        {
           
            char testStr[] = "a+b=c-";

            
            ReplaceSymbols(testStr);

            
            Assert::AreEqual(testStr, "a******");
        }

        
        TEST_METHOD(TestCountOccurrencesEmptyString)
        {
            const char* testStr = "";  
            int result = CountOccurrences(testStr);  
            Assert::AreEqual(result, 0);  
        }

        
        TEST_METHOD(TestReplaceSymbolsNoChanges)
        {

            char testStr[] = "abcdef";

            
            ReplaceSymbols(testStr);

            
            Assert::AreEqual(testStr, "abcdef");  
        }

        
        TEST_METHOD(TestReplaceSymbolsSingleCharacter)
        {
            
            char testStr[] = "+";

            
            ReplaceSymbols(testStr);

            
            Assert::AreEqual(testStr, "**");
        }
    };
}