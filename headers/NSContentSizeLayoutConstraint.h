
@interface NSContentSizeLayoutConstraint : NSLayoutConstraint {

    double _huggingPriority;
    double _compressionResistancePriority;
}

 - (id) _priorityDescription;
 - (double) priorityForVariable:(id)a;
 - (double) huggingPriority;
 - (double) compressionResistancePriority;
 - (id) initWithLayoutItem:(id)avalue:(double)bhuggingPriority:(double)ccompressionResistancePriority:(double)dorientation:(long long)e;


@end
