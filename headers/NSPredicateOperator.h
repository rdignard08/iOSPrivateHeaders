
@protocol NSSecureCoding, NSCopying;
@interface NSPredicateOperator : NSObject <NSSecureCoding, NSCopying> {

    Q _operatorType;
    Q _modifier;
}
 + (BOOL) supportsSecureCoding;
 + (id) _newOperatorWithType:(Q)amodifier:(Q)boptions:(Q)c;
 + (SEL) _getSelectorForType:(Q)a;
 + (id) _getSymbolForType:(Q)a;
 + (id) operatorWithType:(Q)amodifier:(Q)boptions:(Q)c;
 + (id) operatorWithCustomSelector:(SEL)amodifier:(Q)b;

 - (void) _setOptions:(Q)a;
 - (id) initWithOperatorType:(Q)amodifier:(Q)b;
 - (Q) operatorType;
 - (id) predicateFormat;
 - (BOOL) performPrimitiveOperationUsingObject:(id)aandObject:(id)b;
 - (Q) modifier;
 - (BOOL) performOperationUsingObject:(id)aandObject:(id)b;
 - (void) acceptVisitor:(id)aflags:(Q)b;
 - (id) symbol;
 - (id) initWithOperatorType:(Q)a;
 - (id) initWithOperatorType:(Q)amodifier:(Q)boptions:(Q)c;
 - (void) _setModifier:(Q)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (SEL) selector;
 - (id) description;
 - (Q) hash;
 - (BOOL) isEqual:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (Q) options;


@end
