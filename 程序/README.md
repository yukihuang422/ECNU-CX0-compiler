1. 每次只能输入一个变量，且 read 后面不要带括号

    eg:

        read b;

2. 使用 `if` 或 `while` 或 `for` 时末尾需跟分号, 且圆括号里面的条件必须写成 `i > j * j`, 不能写成 `j * j < i`,
也就是说运算符（不包括 || 和 &&）左边不能为算术式，且左右两边都不能为 true 或 false

    eg:

        while(i <= n) {
            ans = ans * i;
            i++;
        };

        if(i <= j * j) {
            write j;
        };

        if(i <= j * j) {
            write j;
        } else {
            write i;
        };

        if(i)
            write i;;

3. In Mac OS X, set test files' `Line Endings` to Unix not Mac OS 9 with Sublime Text 2

4. `if(a)` is supported now

5. 允许函数嵌套 😥，允许函数内部定义已使用过的变量名（覆盖以前的值），未检测变量名重复， 乘法溢出未检测


