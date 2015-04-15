
@interface NSMatchingPredicateOperator : NSStringPredicateOperator {

    int _contextLock;
    ^{?=@^v} _regexContext;
}

 - (BOOL) performPrimitiveOperationUsingObject:(id)aandObject:(id)b;
 - (id) initWithOperatorType:(unsigned long long)amodifier:(unsigned long long)bvariant:(unsigned long long)c;
 - (id) symbol;
 - (BOOL) _shouldEscapeForLike;
 - (void) _clearContext;
 - (SEL) selector;
 - (void) dealloc;
 - (void) finalize;


@end
