/*
    Description:
        Incrementing the column until it hits a non white charecter or the end of the line

    Arguments:
        line: current line to parse
        column: starts from column and moves it so that next functions can parse easily

    Returns:
        Boolean,
        true- got to the end of the line
        false- else
*/
bool incUntilNotWhite(char *line, int *column){
    /* Incrementing until not white chars */
    while (inCharArray(line[*column], WHITE_CHARS)){ 
        if (line[*column] == '\n'){ /* Got to the end of the line */
            return true;
        }
        if(columnPP(column) == ERROR){return false;}
    }
    return false;
}
