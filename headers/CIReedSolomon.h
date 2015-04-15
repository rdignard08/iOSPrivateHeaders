
@interface CIReedSolomon : NSObject {

    [256i] _expTable;
    [256i] _logTable;
    int _cachedGeneratorNum;
    int _memoryCapacity;
    ^{?=^ii} _cachedGenerators;
}

 - (^{?=^ii}) divide:(^{?=^ii})a by:(^{?=^ii})b ;
 - (void) dealloc;
 - (id) initReedSolomon;
 - (BOOL) encode:(^i)a length:(int)b bytes:(int)c ;
 - (BOOL) fillPoly:(^{?=^ii})a coefficients:(^i)b length:(int)c ;
 - (void) clearPoly:(^{?=^ii})a ;
 - (BOOL) isZero:({?=^ii})a ;
 - (^{?=^ii}) copyPoly:(^{?=^ii})a ;
 - (int) addOrSubtract:(int)a with:(int)b ;
 - (int) multiply:(int)a with:(int)b ;
 - (int) Degree:({?=^ii})a ;
 - (int) polyCoefficient:(^{?=^ii})a degree:(int)b ;
 - (int) inverse:(int)a ;
 - (^{?=^ii}) multiplyByMonomial:(^{?=^ii})a degree:(int)b coefficient:(int)c ;
 - (^{?=^ii}) addOrSubtractPoly:(^{?=^ii})a with:(^{?=^ii})b ;
 - (int) Exp:(int)a ;
 - (^{?=^ii}) multiplyPoly:(^{?=^ii})a with:(^{?=^ii})b ;
 - (^{?=^ii}) buildGenerator:(int)a ;
 - (^{?=^ii}) createMonomial:(int)a coefficient:(int)b ;
 - (^i) coefficients:({?=^ii})a ;


@end
