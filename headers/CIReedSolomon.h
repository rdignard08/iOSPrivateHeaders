
@interface CIReedSolomon : NSObject {

    [256i] _expTable;
    [256i] _logTable;
    i _cachedGeneratorNum;
    i _memoryCapacity;
    ^{?=^ii} _cachedGenerators;
}

 - (^{?=^ii}) divide:(^{?=^ii})aby:(^{?=^ii})b;
 - (void) dealloc;
 - (id) initReedSolomon;
 - (BOOL) encode:(^i)alength:(i)bbytes:(i)c;
 - (BOOL) fillPoly:(^{?=^ii})acoefficients:(^i)blength:(i)c;
 - (void) clearPoly:(^{?=^ii})a;
 - (BOOL) isZero:({?=^ii})a;
 - (^{?=^ii}) copyPoly:(^{?=^ii})a;
 - (i) addOrSubtract:(i)awith:(i)b;
 - (i) multiply:(i)awith:(i)b;
 - (i) Degree:({?=^ii})a;
 - (i) polyCoefficient:(^{?=^ii})adegree:(i)b;
 - (i) inverse:(i)a;
 - (^{?=^ii}) multiplyByMonomial:(^{?=^ii})adegree:(i)bcoefficient:(i)c;
 - (^{?=^ii}) addOrSubtractPoly:(^{?=^ii})awith:(^{?=^ii})b;
 - (i) Exp:(i)a;
 - (^{?=^ii}) multiplyPoly:(^{?=^ii})awith:(^{?=^ii})b;
 - (^{?=^ii}) buildGenerator:(i)a;
 - (^{?=^ii}) createMonomial:(i)acoefficient:(i)b;
 - (^i) coefficients:({?=^ii})a;


@end
