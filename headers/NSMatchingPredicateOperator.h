
@interface NSMatchingPredicateOperator : NSStringPredicateOperator {

    i _contextLock;
    ^{?=@^v} _regexContext;
}

 - (BOOL) performPrimitiveOperationUsingObject:(id)aandObject:(id)b;
 - (id) initWithOperatorType:(Q)amodifier:(Q)bvariant:(Q)c;
 - (id) symbol;
 - (BOOL) _shouldEscapeForLike;
 - (void) _clearContext;
 - (SEL) selector;
 - (void) dealloc;
 - (void) finalize;


@end
