
@interface NSKeyValueShareableObservationInfoKey : NSObject {

    BOOL _addingNotRemoving;
    NSKeyValueObservationInfo* _baseObservationInfo;
    NSObject* _additionObserver;
    NSKeyValueProperty* _additionProperty;
    unsigned long long _additionOptions;
    ^v _additionContext;
    NSObject* _additionOriginalObservable;
    NSKeyValueObservance* _removalObservance;
    unsigned long long _removalObservanceIndex;
}



@end
