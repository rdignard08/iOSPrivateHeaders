
@interface NSContentSizeLayoutConstraint : NSLayoutConstraint {

    double _huggingPriority;
    double _compressionResistancePriority;
}

 - (id) _priorityDescription;
 - (double) priorityForVariable:(id)a ;
 - (double) huggingPriority;
 - (double) compressionResistancePriority;
 - (id) initWithLayoutItem:(id)a value:(double)b huggingPriority:(double)c compressionResistancePriority:(double)d orientation:(long long)e ;


@end
