
@interface CIReedSolomon : NSObject {

    [256i] _expTable;
    [256i] _logTable;
    int _cachedGeneratorNum;
    int _memoryCapacity;
    ^{?=^ii} _cachedGenerators;
}

 - (^{?=^ii}) divide:(^{?=^ii})aby:(^{?=^ii})b;
 - (void) dealloc;
 - (id) initReedSolomon;
 - (BOOL) encode:(^i)alength:(int)bbytes:(int)c;
 - (BOOL) fillPoly:(^{?=^ii})acoefficients:(^i)blength:(int)c;
 - (void) clearPoly:(^{?=^ii})a;
 - (BOOL) isZero:({?=^ii})a;
 - (^{?=^ii}) copyPoly:(^{?=^ii})a;
 - (int) addOrSubtract:(int)awith:(int)b;
 - (int) multiply:(int)awith:(int)b;
 - (int) Degree:({?=^ii})a;
 - (int) polyCoefficient:(^{?=^ii})adegree:(int)b;
 - (int) inverse:(int)a;
 - (^{?=^ii}) multiplyByMonomial:(^{?=^ii})adegree:(int)bcoefficient:(int)c;
 - (^{?=^ii}) addOrSubtractPoly:(^{?=^ii})awith:(^{?=^ii})b;
 - (int) Exp:(int)a;
 - (^{?=^ii}) multiplyPoly:(^{?=^ii})awith:(^{?=^ii})b;
 - (^{?=^ii}) buildGenerator:(int)a;
 - (^{?=^ii}) createMonomial:(int)acoefficient:(int)b;
 - (^i) coefficients:({?=^ii})a;


@end
