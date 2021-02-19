    /*
    p = i; //legal

    q = &j; //legal

    p = &*&i; //ilegal

    *i = (*&)j; //ilegal

    i = *&j; //legal
    
    i = *&*&j;//legal

    q = *p;//ilegal

    i = (*p)++ + *q;//legal
*/
