
@interface NSKeyValueContainerClass : NSObject {

    Class _originalClass;
    ^? _cachedObservationInfoImplementation;
    ^? _cachedSetObservationInfoImplementation;
    BOOL _cachedSetObservationInfoTakesAnObject;
    ^{?=##^{__CFSet}^{__CFDictionary}} _notifyingInfo;
}

 - (id) initWithOriginalClass:(Class)a ;
 - (id) description;


@end
