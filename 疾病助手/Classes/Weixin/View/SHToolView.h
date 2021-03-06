//
//  SHToolView.h
//  疾病助手
//
//  Created by 黄少华 on 15/5/12.
//  Copyright (c) 2015年 NXAristotle. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SHToolView : UIView

@property (weak, nonatomic) IBOutlet UIButton *sendVoice;
@property (weak, nonatomic) IBOutlet UITextField *inputField;
@property (weak, nonatomic) IBOutlet UIButton *emotion;
@property (weak, nonatomic) IBOutlet UIButton *more;

+ (instancetype)toolView;
@end
