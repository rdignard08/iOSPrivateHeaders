
@interface _NSPredicateUtilities : NSObject {

}
 + (unsigned long long) _getITypeFor:(r*)a;
 + (unsigned long long) _getCommonTypeFor:(id)a;
 + (id) sum:(id)a;
 + (id) average:(id)a;
 + (id) _doTokenization:(id)alocale:(id)b;
 + (id) _processAndTokenize:(id)aflags:(unsigned long long)blocale:(id)c;
 + (id) _collapseAndTokenize:(id)aflags:(unsigned long long)blocale:(id)c;
 + (id) _convertStringToNumber:(id)a;
 + (id) _parserableStringDescription:(id)a;
 + (id) _parserableCollectionDescription:(id)a;
 + (id) count:(id)a;
 + (id) min:(id)a;
 + (id) max:(id)a;
 + (id) median:(id)a;
 + (id) mode:(id)a;
 + (id) stddev:(id)a;
 + (id) add:(id)ato:(id)b;
 + (id) from:(id)asubtract:(id)b;
 + (id) multiply:(id)aby:(id)b;
 + (id) divide:(id)aby:(id)b;
 + (id) modulus:(id)aby:(id)b;
 + (id) sqrt:(id)a;
 + (id) log:(id)a;
 + (id) ln:(id)a;
 + (id) raise:(id)atoPower:(id)b;
 + (id) exp:(id)a;
 + (id) floor:(id)a;
 + (id) ceiling:(id)a;
 + (id) abs:(id)a;
 + (id) trunc:(id)a;
 + (id) tokenize:(id)ausing:(id)b;
 + (id) uppercase:(id)a;
 + (id) lowercase:(id)a;
 + (id) castObject:(id)atoType:(id)b;
 + (id) random;
 + (id) randomn:(id)a;
 + (id) objectFrom:(id)awithIndex:(id)b;
 + (id) now;
 + (id) distanceToLocation:(id)afromLocation:(id)b;
 + (id) bitwiseAnd:(id)awith:(id)b;
 + (id) bitwiseOr:(id)awith:(id)b;
 + (id) bitwiseXor:(id)awith:(id)b;
 + (id) leftshift:(id)aby:(id)b;
 + (id) rightshift:(id)aby:(id)b;
 + (id) onesComplement:(id)a;
 + (id) noindex:(id)a;
 + (id) distinct:(id)a;
 + (id) inverseOrderKey:(id)a;
 + (BOOL) _isReservedWordInParser:(id)a;
 + (id) _parserableDateDescription:(id)a;
 + (id) _predicateClassesForSecureCoding;
 + (id) _compoundPredicateClassesForSecureCoding;
 + (id) _expressionClassesForSecureCoding;
 + (id) _extendedExpressionClassesForSecureCoding;
 + (id) _operatorClassesForSecureCoding;
 + (id) _constantValueClassesForSecureCoding;

 - (double) distanceFromLocation:(id)a ;


@end
