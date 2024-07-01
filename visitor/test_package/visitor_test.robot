*** Settings ***
Library    Process
Library    OperatingSystem


*** Variables ***
${Visitor_bin}      cpp_impl/cpp_visitor

*** Test Cases ***
Run visitor and check output
    [Documentation]   to do simple test to check the output
    Start Process    ${Visitor_bin}
    ${result}=        Wait For Process
    Should Contain    ${result.stdout}       drawing a circle with radius: 5
    Should Contain    ${result.stdout}       Area of the circle is 25
    Should Contain    ${result.stdout}       drawing a Triangle with width: 4 and length: 
    Should Contain    ${result.stdout}       This is BMW
    Should Contain    ${result.stdout}       This is VW
    Should Not Contain    ${result.stdout}       This is Porsche
    Should Not Contain    ${result.stdout}       drawing a Rectangle