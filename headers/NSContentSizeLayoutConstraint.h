
@interface NSContentSizeLayoutConstraint : NSLayoutConstraint {

    d _huggingPriority;
    d _compressionResistancePriority;
}

 - (id) _priorityDescription;
 - (d) priorityForVariable:(id)a;
 - (d) huggingPriority;
 - (d) compressionResistancePriority;
 - (id) initWithLayoutItem:(id)avalue:(d)bhuggingPriority:(d)ccompressionResistancePriority:(d)dorientation:(q)e;


@end
