
@protocol NSSecureCoding, NSCopying;
@interface NSPredicateOperator : NSObject <NSSecureCoding, NSCopying> {

    unsigned long long _operatorType;
    unsigned long long _modifier;
}
 + (BOOL) supportsSecureCoding;
 + (id) _newOperatorWithType:(unsigned long long)amodifier:(unsigned long long)boptions:(unsigned long long)c;
 + (SEL) _getSelectorForType:(unsigned long long)a;
 + (id) _getSymbolForType:(unsigned long long)a;
 + (id) operatorWithType:(unsigned long long)amodifier:(unsigned long long)boptions:(unsigned long long)c;
 + (id) operatorWithCustomSelector:(SEL)amodifier:(unsigned long long)b;

 - (void) _setOptions:(unsigned long long)a;
 - (id) initWithOperatorType:(unsigned long long)amodifier:(unsigned long long)b;
 - (unsigned long long) operatorType;
 - (id) predicateFormat;
 - (BOOL) performPrimitiveOperationUsingObject:(id)aandObject:(id)b;
 - (unsigned long long) modifier;
 - (BOOL) performOperationUsingObject:(id)aandObject:(id)b;
 - (void) acceptVisitor:(id)aflags:(unsigned long long)b;
 - (id) symbol;
 - (id) initWithOperatorType:(unsigned long long)a;
 - (id) initWithOperatorType:(unsigned long long)amodifier:(unsigned long long)boptions:(unsigned long long)c;
 - (void) _setModifier:(unsigned long long)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (SEL) selector;
 - (id) description;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (unsigned long long) options;


@end
