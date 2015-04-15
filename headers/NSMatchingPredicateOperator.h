
@interface NSMatchingPredicateOperator : NSStringPredicateOperator {

    int _contextLock;
    ^{?=@^v} _regexContext;
}

 - (BOOL) performPrimitiveOperationUsingObject:(id)a andObject:(id)b ;
 - (id) initWithOperatorType:(unsigned long long)a modifier:(unsigned long long)b variant:(unsigned long long)c ;
 - (id) symbol;
 - (BOOL) _shouldEscapeForLike;
 - (void) _clearContext;
 - (SEL) selector;
 - (void) dealloc;
 - (void) finalize;


@end
