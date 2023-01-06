package com.demo.jdbc;

import org.junit.Test;

import java.sql.*;

public class JDBC_PreparedStatement {

    @Test
    public void testPrepare() throws Exception{
        String url = "jdbc:mysql://localhost:3306/test?useSSL=false";
        String username = "root";
        String password = "232330";

        Connection connection = DriverManager.getConnection(url,username,password);

        String name = "zhouan";
        String pwd = "232330";
        String sql = "SELECT * FROM user where username = '"+name+"' and password = '"+pwd+"'";

        Statement statement = connection.createStatement();

        ResultSet resultSet = statement.executeQuery(sql);
        if(resultSet.next())
            System.out.println("登录成功");
        else System.out.println("登陆失败");
    }

    // SQL注入
    @Test
    public void testPrepareInject() throws Exception{
        String url = "jdbc:mysql://localhost:3306/test?useSSL=false";
        String username = "root";
        String password = "232330";

        Connection connection = DriverManager.getConnection(url,username,password);

        String name = "zhouan";
        String pwd = "' or '1' = '1";
        String sql = "SELECT * FROM user where username = '"+name+"' and password = '"+pwd+"'";
        System.out.println(sql);

        // 获取statement对象
        Statement statement = connection.createStatement();
        // 执行SQL
        ResultSet resultSet = statement.executeQuery(sql);

        if(resultSet.next())
            System.out.println("登录成功");
        else System.out.println("登陆失败");
    }

    @Test
    public void testPrepareStatement() throws Exception{

        // 参数开启预编译useServerPrepStmts=true
        String url = "jdbc:mysql://localhost:3306/test?useSSL=false";
        String username = "root";
        String password = "232330";

        Connection connection = DriverManager.getConnection(url,username,password);

        String name = "zhouan";
        String pwd = "' or '1' = '1";
        String sql = "SELECT * FROM user where username = ? and password = ?";
        System.out.println(sql);

        // 获取statement对象
        // Statement statement = connection.createStatement();

        // 获取preparedStatement对象
        PreparedStatement preparedStatement = connection.prepareStatement(sql);
        preparedStatement.setString(1,name);
        preparedStatement.setString(2,pwd);
        // 执行SQL
        ResultSet resultSet = preparedStatement.executeQuery();

        if(resultSet.next())
            System.out.println("登录成功");
        else
            System.out.println("登陆失败");

        connection.close();
        preparedStatement.close();
    }
}
