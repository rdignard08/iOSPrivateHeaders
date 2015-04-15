
@interface NSKeyValueChangeDictionary : NSDictionary {

    {?="kind"Q"oldValue"@"NSObject""newValue"@"NSObject""indexes"@"NSIndexSet""extraData"@} _details;
    @"NSObject" _originalObservable;
    BOOL _isPriorNotification;
    BOOL _isRetainingObjects;
}

 - (void) setOriginalObservable:(id)a;
 - (void) setDetailsNoCopy:({?=Q@@@@})aoriginalObservable:(id)b;
 - (id) initWithDetailsNoCopy:({?=Q@@@@})aoriginalObservable:(id)bisPriorNotification:(BOOL)c;
 - (void) retainObjects;
 - (void) dealloc;
 - (unsigned long long) count;
 - (id) objectForKey:(id)a;
 - (id) keyEnumerator;


@end
