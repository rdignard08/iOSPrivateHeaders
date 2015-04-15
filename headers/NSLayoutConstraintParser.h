
@interface NSLayoutConstraintParser : NSObject {

    NSString* _line;
    r* _lineChars;
    unsigned long long _lineLength;
    unsigned long long _opts;
    BOOL _useHorizontalArrangement;
    NSDictionary* _metrics;
    NSDictionary* _views;
    <NSLayoutItem>* _containerView;
    NSMutableArray* _constraints;
    NSMutableArray* _unflushedWidthConstraints;
    NSMutableArray* _alignmentConstraints;
    unsigned long long _currentCharacter;
    NSMutableArray* _incompleteConstraints;
    <NSLayoutItem>* _parsedLeftView;
    <NSLayoutItem>* _parsedRightView;
    <NSLayoutItem>* _parsedConstrainedWidthView;
}
 + (id) constraintsWithVisualFormat:(id)aoptions:(unsigned long long)bmetrics:(id)cviews:(id)d;

 - (void) parse;
 - (id) constraints;
 - (id) initWithFormat:(id)aoptions:(unsigned long long)bmetrics:(id)cviews:(id)d;
 - (id) descriptionLineWithCurrentCharacterPointer;
 - (void) failWithDescription:(id)a;
 - (void) parseConnection;
 - (id) parseView;
 - (void) finishConstraint;
 - (void) flushWidthConstraints;
 - ({_NSRange=QQ}) rangeOfName;
 - (id) layoutItemForKey:(id)a;
 - (void) parsePredicateList;
 - (void) parsePredicateWithParentheses;
 - (void) parsePredicate;
 - (void) parseOp;
 - (double) parseConstant;
 - (id) metricForKey:(id)a;
 - (void) findContainerView;
 - (id) description;
 - (void) dealloc;


@end
