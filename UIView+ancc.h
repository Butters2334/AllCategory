//
//  UIView+ancc.h
//  muyingzhijia
//
//  Created by Ancc on 15/3/5.
//  Copyright (c) 2015年 ancc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (ancc)
/**self.frame.origin.x;*/
@property (nonatomic,readonly)CGFloat oX,ox,OX;
/**self.frame.origin.y;*/
@property (nonatomic,readonly)CGFloat oY,oy,OY;
/**self.frame.size.height*/
@property (nonatomic,readonly)CGFloat sH,sh,SH;
/**self.frame.size.width*/
@property (nonatomic,readonly)CGFloat sW,sw,SW;
/**self.center.x*/
@property (nonatomic,readonly)CGFloat cX,cx,CX;
/**self.center.y*/
@property (nonatomic,readonly)CGFloat cY,cy,CY;
@end


@interface  UIImage (ancc)
/**self.size.height*/
@property (nonatomic,readonly)CGFloat sH,sh,SH;
/**self.size.width*/
@property (nonatomic,readonly)CGFloat sW,sw,SW;
@end
