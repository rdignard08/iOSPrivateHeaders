
@protocol NSSecureCoding, NSCopying;
@interface NSPredicate : NSObject <NSSecureCoding, NSCopying> {

    {_predicateFlags="_evaluationBlocked"b1"_reservedPredicateFlags"b31} _predicateFlags;
    unsigned int reserved;
}
@property (atomic, copy, readonly) NSString* predicateFormat;
 + (BOOL) supportsSecureCoding;
 + (id) newStringFrom:(id)ausingUnicodeTransforms:(unsigned long long)b;
 + (^{__CFLocale=}) retainedLocale;
 + (id) predicateWithFormat:(id)aarguments:([1{__va_list_tag=II^v^v}])b;
 + (id) predicateWithFormat:(id)aargumentArray:(id)b;
 + (id) predicateWithValue:(BOOL)a;
 + (void) initialize;
 + (id) predicateWithBlock:(@?)a;
 + (id) predicateWithFormat:(id)a;

 - (id) minimalFormInContext:(id)a ;
 - (void) allowEvaluation;
 - (id) predicateFormat;
 - (BOOL) _allowsEvaluation;
 - (void) acceptVisitor:(id)a flags:(unsigned long long)b ;
 - (BOOL) evaluateWithObject:(id)a substitutionVariables:(id)b ;
 - (void) _validateForMetadataQueryScopes:(id)a ;
 - (id) generateMetadataDescription;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (id) description;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (BOOL) evaluateWithObject:(id)a ;
 - (id) predicateWithSubstitutionVariables:(id)a ;


@end
